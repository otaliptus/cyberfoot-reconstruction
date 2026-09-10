// Address: 00467b78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00467b78(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x51) & 0x10) == 0) {
    uVar1 = FUN_0047e374(CONCAT22(*(short *)(param_2 + 10) >> 0xf,*(undefined2 *)(param_2 + 4)),
                         param_2,param_3,(int)*(short *)(param_2 + 10),(int)*(short *)(param_2 + 8))
    ;
    FUN_00403c80(param_1,param_3,uVar1);
  }
  return;
}

