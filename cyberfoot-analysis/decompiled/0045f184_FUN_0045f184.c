// Address: 0045f184
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045f184(int param_1,int param_2)

{
  FUN_0045f038(param_1,param_2);
  FUN_004697b8(param_1,param_2,"BUTTON");
  *(uint *)(param_2 + 4) =
       *(uint *)(param_2 + 4) | *(uint *)(&DAT_00662f70 + (uint)*(byte *)(param_1 + 0x210) * 4);
  return;
}

