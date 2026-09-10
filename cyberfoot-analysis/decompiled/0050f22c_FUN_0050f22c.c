// Address: 0050f22c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_0050f22c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int local_18;
  undefined4 uStack_14;
  
  bVar2 = DAT_0050f2dc;
  local_18 = param_1[0xa8];
  iVar1 = param_1[0x82];
  iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
  (**(code **)(**(int **)(iVar1 + 0xc) + 8))(*(int **)(iVar1 + 0xc),*(undefined4 *)(iVar4 + 0x58));
  uStack_14 = (**(code **)(*param_1 + 0x1c4))(param_1,param_2,param_3);
  cVar3 = FUN_005124d0(param_1,param_2,param_3);
  bVar5 = bVar2;
  if ((cVar3 != '\0') && (bVar5 = bVar2 | 8, (*(byte *)(param_1 + 0x9c) & 4) != 0)) {
    bVar5 = bVar2 | 9;
  }
  cVar3 = FUN_00403c80(param_1);
  if ((cVar3 != '\0') && ((*(byte *)(param_1 + 0x9c) & 0x10) == 0)) {
    bVar5 = bVar5 | 4;
  }
  FUN_00403c80(param_1,param_2,param_3,bVar5,&local_18,&uStack_14);
  return bVar5;
}

