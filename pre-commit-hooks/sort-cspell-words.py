#!/usr/bin/env python3
import sys
import yaml


def sort_and_deduplicate_words(words):
    seen = set()
    result = []
    for word in words:
        key = word.lower()
        if key not in seen:
            seen.add(key)
            result.append(word)
    # Now sort by lower-case, but keep original case
    return sorted(result, key=lambda w: w.lower())


for fname in sys.argv[1:]:
    with open(fname) as f:
        data = yaml.safe_load(f)
    if "words" in data and isinstance(data["words"], list):
        data["words"] = sort_and_deduplicate_words(data["words"])
        with open(fname, "w") as f:
            yaml.dump(data, f, sort_keys=False, allow_unicode=True)
