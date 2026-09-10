// Address: 004850f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004850f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004027fc(0xc);
  *puVar1 = *(undefined4 *)(param_1 + 0x5c);
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined4 **)(param_1 + 0x5c) = puVar1;
  return;
}

