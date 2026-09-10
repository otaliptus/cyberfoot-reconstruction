// Address: 005bf34c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bf34c(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0047e4c0(param_1);
  if (iVar2 != 0) {
    if (param_2 == '\0') {
      if (param_1 == *(int *)(iVar2 + 0x27c)) {
        *(undefined4 *)(iVar2 + 0x27c) = 0;
      }
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x27c);
      if ((iVar1 != 0) && (param_1 != iVar1)) {
        FUN_004673cc(iVar1,0xb02a,0,0);
      }
      *(int *)(iVar2 + 0x27c) = param_1;
    }
  }
  return;
}

