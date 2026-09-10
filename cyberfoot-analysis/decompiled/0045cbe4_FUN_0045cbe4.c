// Address: 0045cbe4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045cbe4(int param_1,int param_2)

{
  uint uVar1;
  
  FUN_0045c29c(param_1,param_2);
  uVar1 = FUN_00403c80(param_1);
  *(uint *)(param_2 + 4) =
       *(uint *)(&DAT_00662ee0 + (uint)*(byte *)(param_1 + 0x224) * 4 + (uVar1 & 0x7f) * 0xc) |
       *(uint *)(param_2 + 4) & ~*(uint *)(&DAT_00662f08 + (uint)*(byte *)(param_1 + 0x226) * 4) | 4
       | *(uint *)(&DAT_00662ef8 + (uint)*(byte *)(param_1 + 0x225) * 4);
  return;
}

