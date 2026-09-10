// Address: 004bc3f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004bc3f4(undefined4 param_1,ushort param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 == 2) {
    cVar1 = FUN_0040c108(param_1);
    if (cVar1 != '\0') {
      iVar2 = 1;
      goto LAB_004bc411;
    }
  }
  iVar2 = 0;
LAB_004bc411:
  return CONCAT22((short)((uint)(PTR_DAT_0066b284 + iVar2 * 0x18) >> 0x10),
                  *(undefined2 *)(PTR_DAT_0066b284 + iVar2 * 0x18 + (uint)param_2 * 2 + -2));
}

