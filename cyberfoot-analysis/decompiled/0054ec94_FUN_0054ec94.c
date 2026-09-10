// Address: 0054ec94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054ec94(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  
  local_30 = *param_3;
  local_2c = param_3[1];
  local_28 = param_3[2];
  local_24 = param_3[3];
  iVar4 = (local_28 - local_30) + 1;
  iVar5 = local_24 - local_2c;
  iVar6 = iVar5 + 1;
  iVar1 = FUN_00430280(param_2);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(param_1 + 0x17c));
  FUN_0042af8c(iVar1,&local_30);
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x178));
  FUN_0042a998(*(undefined4 *)(iVar1 + 0x10),1);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(param_1 + 0x178));
  if (*(char *)(param_1 + 0x174) == '\x01') {
    uVar2 = FUN_0054e8d4(param_1);
    iVar5 = FUN_0054e7c4(uVar2,iVar4);
    if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
    if (0 < iVar5) {
      FUN_0041c990(local_30,local_2c,iVar5,local_20,iVar6);
      FUN_0042af8c(iVar1,local_20);
    }
  }
  else if (*(char *)(param_1 + 0x174) == '\x02') {
    uVar2 = FUN_0054e8d4(param_1);
    iVar3 = FUN_0054e7c4(uVar2,iVar6);
    if (iVar6 <= iVar3) {
      iVar3 = iVar5;
    }
    FUN_0041c990(local_30,iVar6 - iVar3,iVar4,local_20,iVar6);
    FUN_0042af8c(iVar1,local_20);
  }
  return;
}

