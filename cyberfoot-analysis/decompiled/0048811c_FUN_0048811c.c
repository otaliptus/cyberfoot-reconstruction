// Address: 0048811c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048811c(int param_1)

{
  tagPOINT tStack_c;
  
  FUN_00487fe4(param_1);
  if (*(char *)(param_1 + 0x89) == '\0') {
    GetCursorPos(&tStack_c);
    FUN_00488430(param_1,&tStack_c);
  }
  else if (*(char *)(param_1 + 0x89) == '\x01') {
    FUN_00488154(param_1);
  }
  return;
}

