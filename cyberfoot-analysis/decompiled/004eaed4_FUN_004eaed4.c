// Address: 004eaed4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004eaed4(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar4 = extraout_DL;
  }
  FUN_004ea1d0(param_1,0);
  *(undefined2 *)(param_1 + 0x270) = 1;
  *(undefined1 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x27a) = 1;
  *(undefined2 *)(param_1 + 0x2a8) = 1;
  piVar2 = (int *)FUN_004e9e64(PTR_PTR_004e96e8,1,param_1);
  *(int **)(param_1 + 0x2a4) = piVar2;
  (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x2a4),1);
  (**(code **)(**(int **)(param_1 + 0x2a4) + 0x84))(*(int **)(param_1 + 0x2a4),0x14,0x85,0x14,0x2f);
  iVar1 = *(int *)(param_1 + 0x2a4);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0xe4) = param_1;
  *(code **)(iVar1 + 0xe0) = FUN_004eb5f4;
  piVar2 = (int *)FUN_004e9e64(PTR_PTR_004e96e8,1,param_1);
  *(int **)(param_1 + 0x280) = piVar2;
  (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x280),1);
  uVar5 = 0x14;
  (**(code **)(**(int **)(param_1 + 0x280) + 0x84))(*(int **)(param_1 + 0x280),0x52,0x85,0x14,0x2f);
  iVar1 = *(int *)(param_1 + 0x280);
  *(undefined4 *)(iVar1 + 0xc) = 1;
  *(int *)(iVar1 + 0xe4) = param_1;
  *(code **)(iVar1 + 0xe0) = FUN_004eb5f4;
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  uVar3 = FUN_00403a54(PTR_PTR_0041bda0,1);
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  uVar3 = FUN_00403a54(PTR_PTR_0041bda0,1);
  *(undefined4 *)(param_1 + 0x27c) = uVar3;
  if (cVar4 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uVar5;
  }
  return param_1;
}

