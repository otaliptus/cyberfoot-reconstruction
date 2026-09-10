// Address: 00584268
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00584268(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x218);
  if (param_2 != iVar1) {
    *(int *)(param_1 + 0x218) = param_2;
    cVar2 = FUN_0058436c(param_1);
    if (cVar2 == '\0') {
      *(int *)(param_1 + 0x218) = iVar1;
    }
    FUN_00584518(param_1);
    FUN_00466754(param_1);
  }
  return;
}

