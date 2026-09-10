// Address: 00453a08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00453a08(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c [4];
  undefined4 local_18;
  
  puVar4 = auStack_1c;
  if (((*(byte *)(param_1 + 7) & 0x10) == 0) && (param_1[0x61] != 0)) {
    iVar1 = param_1[0x61];
    if (iVar1 != 0) {
      uVar2 = FUN_00453dec(param_1,param_2,param_3,auStack_1c);
      iVar3 = FUN_004673cc(iVar1,0x417,uVar2,puVar4);
      if (iVar3 != 0) {
        uVar2 = FUN_00408014((*(byte *)((int)param_1 + 0x57) ^ 1) & 0x7f,0);
        FUN_004673cc(iVar1,0x404,local_18,uVar2);
      }
      if (*(char *)(iVar1 + 0x5c) != '\0') {
        FUN_00403c80(iVar1);
      }
    }
    (**(code **)(*param_1 + 0x9c))();
    uVar2 = FUN_00453dec(param_1);
    FUN_00454298(param_1[0x61],uVar2);
  }
  return;
}

