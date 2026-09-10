// Address: 0051e0a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_0051e0a8(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x10) == '\0') {
    bVar1 = FUN_0051a988(param_1);
  }
  else {
    bVar1 = 2;
  }
  while ((bVar1 < 2 && (iVar4 = FUN_0051aad8(*(undefined4 *)(param_1 + 0x30)), 0 < iVar4))) {
    piVar3 = (int *)FUN_0051cf94(*(undefined4 *)(param_1 + 0x30),0);
    bVar2 = (**(code **)(*piVar3 + 0xc))();
    if (bVar1 < bVar2) {
      bVar1 = bVar2;
    }
  }
  return bVar1;
}

