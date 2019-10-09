# SpatialOS Unreal GDK Example Project

<img src="https://user-images.githubusercontent.com/2433131/58086122-f28af200-7bb5-11e9-9b96-b13b747130d0.png" height="70%" width="70%">

- **LICENSE:** Use of the contents of this repository is subject to the [license](LICENSE.md)

This project requires the Online Services (available [here](https://docs.improbable.io/metagame/0.1.0/index)) in order for the party and deployment connection systems to work. Follow the [Quickstart](https://docs.improbable.io/metagame/0.1.0/content/get-started/quickstart) guide to set these up. We also recommend using a deployment pool to manage your deployments, available from [here](https://docs.improbable.io/metagame/0.1.0/content/configuration-examples/deployment-pool/overview).

We provide a custom matcher here to replace the default SampleMatcher contained in the Online Services. This exists as [Matcher.cs](Matcher.cs) in this directory, to use this matcher instead of the default then replace the `services/csharp/SampleMatcher/Matcher.cs` in the `online-services` repository.

#### Database Sync Worker

The [Database Sync Worker](https://docs.improbable.io/unreal/alpha/content/tutorials/dbsync/tutorial-dbsync-intro) is included as a submodule located within `spatial/workers/database-sync-worker`. Go to this directory and initialise the submodule by doing `git submodule init` then `git submodule update`. Once the submodule has been initialised copy `spatial/provided/spatialos.DatabaseSyncWorker.worker.json` into `spatial/workers/database-sync-worker`, as the Database Sync Worker uses a different [SpatialOS project layout](https://docs.improbable.io/unreal/alpha/content/tutorials/dbsync/tutorial-dbsync-setup#3-clone-and-build-the-database-sync-worker) than the GDK. Make sure that the submodule has checked out the release tag `0.1.0` rather then `master` branch.

For the Database Sync Worker to work you will need to set up a [Postgres database](https://docs.improbable.io/unreal/alpha/content/tutorials/dbsync/tutorial-dbsync-setup), ideally within the same Google Cloud Project as the Online Services. If you want to configure the worker connect to a remote hosted ProgrestSQL instance, [check here](https://github.com/spatialos/database-sync-worker#configure-dbsync).

You may need to install [.NET Core 2.2.402](https://dotnet.microsoft.com/download/dotnet-core/2.2) if you haven't already got it installed.

#### Player Authentication

In this project we give examples of how to authenticate a player account via both Google and PlayFab, with the latter linking directly to our Online Services. Google authentication is handled by a plugin included with Unreal Engine, however you will need to create credentials within your Google Cloud Project which the client can use. These can be created from the GCP menu via `APIs & Services > Credentials`.

For PlayFab, we have modified the PlayFab marketplace plugin to support necessary functionality for our Google login flow. The modified plugin is available in this [GitHub Repo](https://github.com/spatialos/UnrealMarketplacePlugin), you will need to include the 4.22 version of the plugin within the `Game/Plugins` directory.

##### Configuration

There are some values in the game configuration files which will need to be filled in with details once the Online Services Quickstart has been completed. These can be found [here](../Game/Config/DefaultEngine.ini), in a section which looks like this:

```
[/Script/GDKShooter.OnlineServicesLibrary]
PlayFabTitleID=<your playfab title id>
PlayFabSecretKey=<your playfab secret key>
GoogleCloudProjectID=<your google cloud project id>

[OnlineSubsystemGoogle]
bEnabled=true
ClientId=<your client id>
ClientSecret=<your client secret>
```

You will need to replace these values with your PlayFab game, GCP project, and GCP credentials created in the steps outlined above.

#### Public contributors

We are not currently accepting public contributions. However, we are accepting [issues](https://github.com/spatialos/UnrealGDK/issues) and we do want your feedback.

&copy; 2019 Improbable