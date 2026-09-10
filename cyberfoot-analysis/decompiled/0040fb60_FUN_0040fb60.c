// Address: 0040fb60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 * FUN_0040fb60(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  
  uVar2 = FUN_0040fac0(param_1);
  puVar1 = *(undefined4 **)(param_1 + 4 + (uVar2 & 0xff) * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar3 = FUN_0040fa60(puVar1 + 2,0x7fffffff);
    if (iVar3 != 0x7fffffff) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  DVar4 = GetCurrentThreadId();
  puVar1[1] = DVar4;
  return puVar1;
}

