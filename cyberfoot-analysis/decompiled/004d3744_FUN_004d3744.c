// Address: 004d3744
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d3744(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00405250(param_1,param_2,param_3,0,0x80,3,0);
  FUN_004d3fd0(uVar1,*(undefined4 *)(&DAT_006696a4 + (param_2 & 3) * 4),
               *(undefined4 *)(&DAT_006696b0 + ((param_2 & 0xf0) >> 4) * 4));
  return;
}

