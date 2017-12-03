from socket import *


def main(argv):

    try:
        host = argv[1]
        port = int(argv[2])
    except Exception as e:
        print("Usage: python %s host port" % argv[0])
        __import__('sys').exit(1)

    with socket(AF_INET, SOCK_STREAM) as sock:
        sock.connect((host, port))

        while "Lucy in the sky with diamonds":
            inp = input("(db) > ")
            if (inp == "q"):
                break
            sock.send(inp.encode())


if __name__ == '__main__':
    try:
        main(__import__('sys').argv)
    except KeyboardInterrupt:
        print("^C")