// Address: 004062b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004062b0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0066203c;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    if (((param_1 == puVar1[1]) || (param_1 == puVar1[2])) || (param_1 == puVar1[3])) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  FUN_00406268(puVar1);
  return;
}

