# Embedded Git Cheat Sheet

A concise reference for daily Git workflow and firmware version control.

### 1. Basic Workflow
- Check status: git status
- Stage changes: git add <file> (or git add .)
- Commit changes: git commit -m "your message"
- Push to GitHub: git push

### 2. Commit History
- View compact log: git log --oneline
- View recent N commits: git log --oneline -n 3

### 3. Branching
- Create and switch to new branch: git checkout -b <branch_name>
- Switch branch: git checkout <branch_name>
- List local branches: git branch
- Push new branch: git push -u origin <branch_name>

### 4. Git Stash (Temporary Save)
- Save current unfinished work: git stash save "message"
- List saved stashes: git stash list
- Restore and remove from stash: git stash pop

### 5. Git Merge
- Merge a branch into current branch: git merge <branch_name>

### 6. Ignore Build Artifacts (.gitignore)
- Ignore binaries and object files: *.o, *.elf, *.hex, build/, Debug/
- Clear cache if ignored files were tracked: git rm -r --cached .
