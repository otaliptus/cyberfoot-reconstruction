// Address: 00469204
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469204(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [16];
  int *local_8;
  
  puStack_20 = (undefined1 *)0x469218;
  local_8 = param_1;
  cVar2 = FUN_0046cde4(param_1);
  if ((cVar2 != '\0') && ((*(byte *)(local_8 + 7) & 8) == 0)) {
    if ((short)local_8[0x58] == 0) {
      puStack_20 = (undefined1 *)0x469244;
      FUN_00469298(local_8);
      puStack_24 = &LAB_0046928b;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*local_8 + 0x44))(local_8,local_18);
      (**(code **)(*local_8 + 0x90))(local_8,param_2,local_18);
      puVar1 = puStack_20;
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x469292;
      *(ushort *)(local_8 + 0x15) = *(ushort *)(local_8 + 0x15) & 0xffef;
      puStack_24 = (undefined1 *)0x46928a;
      FUN_004692a0(local_8,uStack_28,puVar1);
      return;
    }
    *(ushort *)(local_8 + 0x15) = *(ushort *)(local_8 + 0x15) | 0x10;
  }
  return;
}

