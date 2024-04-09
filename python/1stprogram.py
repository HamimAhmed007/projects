def sentence_maker(phrase):
    interogatives = ("how", "why", "when", "what")
    capatialized = phrase.capitalize()
    if phrase.startswith(interogatives):
        return "{}?".format(capatialized)
    else:
        return "{}.".format(capatialized)

result = []

while True :
    user_input = input("say something: ")
    if user_input == "\e":
        break
    else:
        result.append(sentence_maker(user_input))

print(" ".join(result))
