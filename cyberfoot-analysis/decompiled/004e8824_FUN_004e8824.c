// Address: 004e8824
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004e8824(int param_1,char param_2)

{
  undefined4 uVar1;
  int *piVar2;
  HCURSOR pHVar3;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar4 = extraout_DL;
  }
  FUN_004e8690(param_1,0);
  *(undefined1 *)(param_1 + 0x23c) = 1;
  uVar1 = FUN_004e79e4(PTR_PTR_004e7444,1,param_1,0);
  *(undefined4 *)(param_1 + 0x238) = uVar1;
  uVar1 = FUN_004e79e4(PTR_PTR_004e7444,1,param_1,0);
  *(undefined4 *)(param_1 + 0x268) = uVar1;
  piVar2 = (int *)FUN_004e6f88(PTR_PTR_004e6db0,1,param_1);
  *(int **)(param_1 + 0x25c) = piVar2;
  (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x25c),0);
  uVar1 = FUN_0043b0ac(PTR_PTR_00438f00,1,param_1);
  *(undefined4 *)(param_1 + 0x260) = uVar1;
  FUN_0043b234(uVar1,0);
  FUN_0043b254(*(undefined4 *)(param_1 + 0x260));
  FUN_0043b244(*(undefined4 *)(param_1 + 0x260),1);
  *(undefined1 *)(param_1 + 0x264) = DAT_004e899c;
  FUN_004e7aa0(*(undefined4 *)(param_1 + 0x238),0);
  FUN_004e7aa0(*(undefined4 *)(param_1 + 0x268),1);
  *(undefined1 *)(param_1 + 0x26c) = DAT_004e89a0;
  pHVar3 = LoadCursorA(DAT_0066c668,"ROLL");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,0xfa3,pHVar3);
  pHVar3 = LoadCursorA(DAT_0066c668,"ROLLUP");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,0xfa4,pHVar3);
  pHVar3 = LoadCursorA(DAT_0066c668,"ROLLDOWN");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,0xfa5,pHVar3);
  if (cVar4 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

