def makeArrayConsecutive2(statues):
    min = statues[0]
    max = statues[0]
    for each in statues:
        if each < min:
            min = each
        if each > max:
            max = each
    return max - min + 1 - len(statues)
