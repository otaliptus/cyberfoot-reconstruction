// Address: 0042c6e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

ushort FUN_0042c6e8(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
  uVar2 = 0;
  puVar1 = param_1 + 10;
  for (; (int)param_1 < (int)puVar1; param_1 = param_1 + 1) {
    uVar2 = uVar2 ^ *param_1;
  }
  return uVar2;
}

