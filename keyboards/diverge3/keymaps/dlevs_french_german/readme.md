# French / German keymap

Features characters with accents, like à, é, œ, etc.

Some of the [keymap.c](./keymap.c) file has been generated by running `node generate-sequence`. When updating, run that again and paste the result back into [keymap.c](./keymap.c).

This keymap works via dirty hacks. When a key is pressed, it enters a number pad sequence with the alt key held down. It has only been tested on Windows and didn't work on MacOS from limited testing.
