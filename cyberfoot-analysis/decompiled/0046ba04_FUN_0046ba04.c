// Address: 0046ba04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0046ba04(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_14;
  
  local_14 = param_3;
  iVar2 = FUN_0047e4c0(param_1);
  if ((((iVar2 != 0) && (param_1 != iVar2)) && (*(char *)(iVar2 + 0x22d) != '\0')) &&
     (cVar1 = FUN_0046ba04(iVar2,param_2), cVar1 != '\0')) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0x51) & 0x10) == 0) {
    local_14 = CONCAT31(local_14._1_3_,*(undefined1 *)(param_2 + 4));
    FUN_00403c80(param_1,&local_14);
    *(ushort *)(param_2 + 4) = (ushort)(byte)local_14;
    if (*(char *)(param_2 + 4) == '\0') {
      return 1;
    }
  }
  return 0;
}

