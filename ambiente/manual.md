# montar o ambiente
## criar imagem:
```bash
podman build -t c-estudo .
```
## entrar no ambiente
```bash
podman run --rm -it \
    --name c-estudo \
    -v "$PWD:/workspace" \
    c-estudo
```
### compilar e executar
```bash
gcc hello.c -o hello
./hello
```

