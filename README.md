# 简牍 / jamdoo

一个支持纵书的中文文本编辑器。

## Install

Dependencies:

- `libx11`:
  - debian: `sudo apt install libx11-dev`
  - ubuntu: `sudo apt install libx11-dev`

Compile:

```
git clone https://github.com/xieyuheng/jamdoo
cd jamdoo
make -j
make test
```

The compiled binary `./bin/jamdoo` is the command-line program.

## Development

```shell
make all      # compile src/ files to lib/ and bin/
make run      # compile and run the command-line program
make test     # compile and run test
make clean    # clean up compiled files
```

## References

**Inspirations**:

- [uxn](https://100r.co/site/uxn.html)

**Books**:

- [scalable c](https://github.com/booksbyus/scalable-c)

## License

[GPLv3](LICENSE)
