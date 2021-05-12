n = int(input())  # Number of elements which make up the association table.
q = int(input())  # Number Q of file names to be analyzed.
MIME = {}
for i in range(n):
    # ext: file extension
    # mt: MIME type.
    ext, mt = input().split()
    MIME[ext.lower()] = mt
for i in range(q):
    fname = input()  # One file name per line.
    dotindex = fname.rfind(".") + 1
    if dotindex == 0:
        typename = ""
    else:
        typename = fname[dotindex:]
    print(MIME.get(typename.lower(), "UNKNOWN"))
