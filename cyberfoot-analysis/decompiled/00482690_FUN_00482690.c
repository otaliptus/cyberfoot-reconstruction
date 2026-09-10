// Address: 00482690
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00482690(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x22e) != '\0') && (*(int *)(param_1 + 0x220) != 0)) {
    FUN_004673cc(*(undefined4 *)(param_1 + 0x220),0xb004,0,param_2);
  }
  if (*(char *)(param_1 + 0x22f) == '\x02') {
    iVar1 = FUN_004812a8(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_004812a8(param_1);
      FUN_00482690(uVar2,param_2);
    }
  }
  return;
}

