// Address: 00401d44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 * FUN_00401d44(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0066c628;
  while( true ) {
    if ((undefined4 **)puVar1 == &DAT_0066c628) {
      DAT_0066c5c8 = 3;
      return (undefined4 *)0x0;
    }
    if (((uint)puVar1[2] <= param_1) && (param_1 < (uint)(puVar1[2] + puVar1[3]))) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

