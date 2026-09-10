// Address: 00467818
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00467818(int param_1,int param_2,undefined4 param_3,byte param_4)

{
  byte bVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(byte *)(param_1 + 0x51) & 0x10) == 0) {
    if ((*(int *)(param_1 + 0x48) < 0x8001) && (*(int *)(param_1 + 0x4c) < 0x8001)) {
      bVar1 = FUN_0047e374(CONCAT22(*(short *)(param_2 + 10) >> 0xf,*(undefined2 *)(param_2 + 4)),
                           param_2,param_3,(int)*(short *)(param_2 + 10),
                           (int)*(short *)(param_2 + 8));
      FUN_00403c80(param_1,param_3,bVar1 | param_4);
    }
    else {
      FUN_00467298(param_1,&local_c);
      bVar1 = FUN_0047e374(*(undefined2 *)(param_2 + 4));
      FUN_00403c80(param_1,param_3,bVar1 | param_4,local_8,local_c);
    }
  }
  return;
}

