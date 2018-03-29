# Using Visual Studio Code
To compile this project. Create a `tasks.json` (inside `.vscode` directory) with the following content:
```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "mbed compile app",
            "type": "shell",
            "command": "mbed compile",
            "args": ["-f"]
        },
    ]
}
``` 