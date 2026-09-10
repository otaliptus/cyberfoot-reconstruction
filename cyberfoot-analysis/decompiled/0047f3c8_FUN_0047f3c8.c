// Address: 0047f3c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047f3c8(int param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x218) == '\0') {
    puStack_c = (undefined1 *)0x47f3e7;
    local_8 = param_1;
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      puStack_10 = &LAB_0047f4b3;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      *(undefined1 *)(local_8 + 0x218) = 1;
      puStack_c = &stack0xfffffffc;
      cVar1 = FUN_0047e968(*(undefined4 *)(local_8 + 0x20c));
      if (cVar1 == '\0') {
        cVar1 = FUN_0047e968(*(undefined4 *)(local_8 + 0x208));
        if (cVar1 == '\0') {
          FUN_0047efd4(*(undefined4 *)(local_8 + 0x20c),0,0);
          FUN_0047efd4(*(undefined4 *)(local_8 + 0x208),1,0);
        }
        else {
          FUN_0047efd4(*(undefined4 *)(local_8 + 0x20c),0,1);
          FUN_0047efd4(*(undefined4 *)(local_8 + 0x208),1,0);
        }
      }
      else {
        FUN_0047efd4(*(undefined4 *)(local_8 + 0x208),0,1);
        FUN_0047efd4(*(undefined4 *)(local_8 + 0x20c),1,0);
      }
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)(local_8 + 0x218) = 0;
      return;
    }
  }
  return;
}

