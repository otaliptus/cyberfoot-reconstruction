// Address: 004eeb38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004eeb38(int *param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  HCURSOR pHVar4;
  char extraout_DL;
  char cVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar5 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    cVar5 = extraout_DL;
  }
  FUN_0045bdb4(param_1,0);
  iVar2 = FUN_0042acbc(PTR_PTR_00460cd4,1);
  param_1[0x89] = iVar2;
  FUN_00464de4(iVar2,param_1);
  FUN_004eedb4(param_1,0);
  piVar3 = (int *)FUN_004ee938(PTR_PTR_004ec2a4,1,param_1);
  param_1[0x8a] = (int)piVar3;
  (**(code **)(*piVar3 + 0x68))(piVar3,param_1);
  iVar2 = param_1[0x8a];
  *(int **)(iVar2 + 0xd4) = param_1;
  uVar1 = *(undefined4 *)(*param_1 + 0x104);
  *(undefined4 *)(iVar2 + 0xd0) = uVar1;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  iVar2 = FUN_004ee8d8(PTR_PTR_004ec1d4,CONCAT31((int3)((uint)uVar1 >> 8),1),param_1);
  param_1[0x8c] = iVar2;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  iVar2 = FUN_0042fcb8(PTR_PTR_00429378,1);
  param_1[0x8e] = iVar2;
  *(int **)(iVar2 + 0x14) = param_1;
  *(undefined1 **)(iVar2 + 0x10) = &LAB_004eeda0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined1 *)((int)param_1 + 0x251) = 0;
  (**(code **)(*param_1 + 0x5c))(param_1,1);
  FUN_0045be90(param_1,1);
  FUN_004663a8(param_1,0xff000005);
  FUN_004659e8(param_1,0x14);
  FUN_004663cc(param_1,0);
  FUN_0046cd14(param_1,1);
  FUN_004659c4(param_1,0x79);
  pHVar4 = LoadCursorA(DAT_0066c668,"REVERSEDARROW");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,1000,pHVar4);
  if (cVar5 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

