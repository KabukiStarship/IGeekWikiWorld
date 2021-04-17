# Contributing Guide

IGeekWikiWorld uses Issue-driven Development and Mission Tickets to keep the cleanest possible commit log and build institutionalized knowledge.

## Bug Reports and Fixes

**1.** Ensure the bug was not already reported by by reading the [Issues](https://github.com/abc_org/xyz_project/issues).

**2.** Open `/docs/BUG_REPORT_TEMPLATE.md` and copy it's contents to the clipboard.

**3.** Create an issue, paste the template into the Issue body and fill it out.

## Feature Requests

**1.** Same as the instructions for submitting a bug report except with using `/docs/FEATURE_REQUEST.md`.

### Completing Issues

**1.** Clone the repo and create a branch for the IssueNuber:

```Console
mkdir KabukiStarship
cd KabukiStarship
git clone https://github.com/KabukiStarship/IGeekWikiWorld.git
cd IGeekWikiWorld
git checkout -b Mission123
```

**2.** Complete the issue with passing unit tests and submit the completed issue:

```Console
git add --all
git commit -m "ModuleID.Add feature XYZ. #123"
git push origin Mission123
```

**3.** Create a Pull Requesting using the `/docs/PULL_REQUEST_TEMPLATE.md`

**4.** Get others to inspect your changes and merge the branch to the master.

**5.** Complete the Mission and push the code to the repo in a branch nammed after the MissionNumber.

```Console
git branch -m Mission123 Mission125
git add --all
git commit "ModuleID.Fix feature ABC. #125"
git push origin Mission125
```

## License

Copyright 2021 © [Kabuki Starship](https://kabukistarship.com).

This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with this file, You can obtain one at <https://mozilla.org/MPL/2.0/>.
