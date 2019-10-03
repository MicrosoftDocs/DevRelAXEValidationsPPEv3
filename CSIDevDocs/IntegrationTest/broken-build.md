# Gauntlet - VS Code\r\n\r\n[Gauntlet](..\Gauntlet-VSCode-Test-Dir-2\test.md) is an in-development standardized web API service layer that consolidates content validation and authoring checks into a scalable, performant, and extensible framework. Gauntlet provides a secure single end-point, which allows checks to be executed during authoring time in VS Code via a test001\r\n\r\n![custom extension](../media/link-checker-2.png). \r\n\r\n[Link to install](install.md)\r\n\r\n[Link to install 3](..\Gauntlet-VSCode-Test-Dir-3\install.md)\r\n\r\n![Art link](../media/training-tutorial-gitbash-add.png)\r\n\r\n![Art link Gauntlet 2](../Gauntlet-VSCode-Test-Dir-2/media/GauntletFullTopology.png)\r\n\r\nThe key goals of Gauntlet are to improve content quality and increase writer productivity by ensuring that the majority of validation checks happen upstream instead of being discovered post-publish. \r\nGauntlet and the VS Code extension will allow writers to validate their content as they go and make any corrections to broken links, incorrect metadata, missing art files, and so on prior to publishing. Although validation will still happen downstream, this on-the-fly up-stream validation will  remain more focused within VS Code and make corrections in real-time.\r\n\r\nAdditionally, Gauntlet will integrate directly with the SkyEye Analytics Hub to publish the results of all validation checks. The validation results and telemetry data will allow over time a complete overview of the �health� of the content, which will facilitate data driven \r\n\r\n[!code-cs[msbuild_SimpleConsoleLogger#1](../msbuild/codesnippet/CSharp/build-loggers_1.cs)] \r\n\r\n[!code-cs[build-loggers_1](../msbuild/codesnippet/CSharp/build-loggers_1.cs)]\r\n\r\n![Gauntlet Full Topology](..\Gauntlet-VSCode\media\GauntletFullTopology.png)\r\n, more for auto testing...