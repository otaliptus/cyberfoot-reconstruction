// Address: 0040fad8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040fad8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_0040fac0(param_1);
  DVar2 = GetCurrentThreadId();
  for (puVar3 = *(undefined4 **)(param_1 + 4 + (uVar1 & 0xff) * 4);
      (puVar3 != (undefined4 *)0x0 && (DVar2 != puVar3[1])); puVar3 = (undefined4 *)*puVar3) {
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_0040fb60(param_1);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_0040952c(0x10);
      puVar3[1] = DVar2;
      puVar3[2] = 0x7fffffff;
      *puVar3 = puVar3;
      uVar4 = FUN_0040fa60(param_1 + 4 + (uVar1 & 0xff) * 4,puVar3);
      *puVar3 = uVar4;
    }
  }
  *param_2 = puVar3;
  return;
}

