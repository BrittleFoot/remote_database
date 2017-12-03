# Simple remote database

## socklib test

### *nix
```bash
gcc -std=c99 main.c socklib.c -Wall -Wextra -Werror -pedantic
```

### windows
```bash
gcc -std=c99 main.c socklib.c -lws2_32 -Wall -Wextra -Werror -pedantic
```

### Usage
```
./a.out host port
```

use `client.py` to immitate clients.
