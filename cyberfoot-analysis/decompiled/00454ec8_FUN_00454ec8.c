// Address: 00454ec8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454ec8(int param_1)

{
  char cVar1;
  
  if ((DAT_00454f10 != (*(ushort *)(param_1 + 0x1c) & _DAT_00454f0c)) &&
     (cVar1 = FUN_0046cde4(param_1), cVar1 == '\0')) {
    return;
  }
  FUN_00453ff0(param_1,*(undefined4 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x214));
  FUN_00454f24(param_1);
  return;
}

