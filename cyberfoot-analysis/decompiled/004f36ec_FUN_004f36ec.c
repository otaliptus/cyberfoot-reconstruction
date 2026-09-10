// Address: 004f36ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f36ec(int param_1,short *param_2,uint param_3)

{
  undefined4 extraout_EDX;
  
  FUN_004f02c4(param_1,param_2,param_3);
  if (((param_3 & 2) != 0) && ((*param_2 == 0x26 || (*param_2 == 0x28)))) {
    FUN_004f39f0(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_1 + 0x279))
                         ^ 1);
  }
  if (*param_2 == 0xd) {
    FUN_004f39f0(param_1,0);
  }
  return;
}

