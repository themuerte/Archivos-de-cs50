import flask
from nltk.tokenize import sent_tokenize


def lines(a, b):
    """Return lines in both a and b"""

    # obtiene las lineas parecidas
    listaA = set(a.split("\n"))
    listaB = set(b.split("\n"))

    listaResL = listaA & listaB

    return listaResL


def sentences(a, b):
    """Return sentences in both a and b"""

    # obtiene las oraciones parecidas
    listaA = set(sent_tokenize(a))
    listaB = set(sent_tokenize(b))

    listaResS = listaA & listaB

    return listaResS


def substrings(a, b, n):
    """Return substrings of length n in both a and b"""

    # obtiene las oraciones parecidas
    listaA = set(sent_tokenize(a, n))
    listaB = set(sent_tokenize(b, n))

    listaResS = listaA & listaB

    return listaResS

    # por que solo 10 dias

