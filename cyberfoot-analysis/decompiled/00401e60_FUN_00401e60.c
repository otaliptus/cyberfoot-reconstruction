// Address: 00401e60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00401e60(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *param_1;
  if ((uVar1 & 0x80000000) != 0) {
    uVar2 = uVar1 & 0x7ffffffc;
    param_1 = (uint *)((int)param_1 + uVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 & 2) == 0) {
    FUN_00401ce0(param_1);
    uVar2 = uVar2 + param_1[2];
    param_1 = (uint *)((int)param_1 + param_1[2]);
    *param_1 = *param_1 & 0xfffffffe;
  }
  return uVar2;
}

