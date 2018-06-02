# IoT Apps Store

To Deploy IoT Apps using Open Devices IoT Platform you have to point to
your IoT Apps Catalogue.

An IoT Apps Catalogue is a json file that contains information about
your Applications.


## IoT Apps Catalogue format

This is an example of an App Catalogue:

```json
{
        "Name": "Company Linux-IoT App Store",
        "Version": 1,
        "Apps": [
                {
                        "name": "Hello World Python",
                        "description": "hello world Python v1",
                        "url": "https://company.com/apps/hello_world_python.tar",
                        "tags": ["video"],
                        "security": "privileged",
                },
        ]
}
```
