// Address: 00467ac8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00467ac8(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)((int)param_1 + 0x51) & 0x10) == 0) {
    if ((param_1[0x12] < 0x8001) && (param_1[0x13] < 0x8001)) {
      iVar2 = (int)*(short *)(param_2 + 10);
      uVar1 = FUN_0047e374(CONCAT22(*(short *)(param_2 + 10) >> 0xf,*(undefined2 *)(param_2 + 4)));
      FUN_00403c80(param_1,uVar1,(int)*(short *)(param_2 + 8),iVar2);
    }
    else {
      FUN_00467298(param_1,&uStack_10);
      uVar1 = FUN_0047e374(*(undefined2 *)(param_2 + 4));
      FUN_00403c80(param_1,uVar1,uStack_10,uStack_c);
    }
  }
  return;
}

