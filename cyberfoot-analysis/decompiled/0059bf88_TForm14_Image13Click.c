// Address: 0059bf88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm14_Image13Click(int param_1)

{
  int *piVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_FS_OFFSET;
  undefined4 local_2c;
  undefined1 **ppuStack_28;
  undefined4 *puStack_24;
  int iStack_20;
  undefined1 *local_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  iVar4 = 5;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_1c = &LAB_0059c053;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  DAT_006d23e4 = 0;
  puStack_24 = &local_c;
  piVar1 = *(int **)(param_1 + 0x318);
  ppuStack_28 = (undefined1 **)0x59bfc4;
  uVar3 = (**(code **)(*piVar1 + 0x138))();
  ppuStack_28 = (undefined1 **)0x59bfd0;
  FUN_00416244(&local_1c,uVar3,0xfc);
  ppuStack_28 = &local_1c;
  local_2c = 0x59bfe1;
  FUN_00416478(&local_2c,&LAB_0059c068);
  ppuVar2 = ppuStack_28;
  ppuStack_28 = (undefined1 **)0x59bfec;
  FUN_0050e448(piVar1,&local_2c,ppuVar2);
  ppuStack_28 = (undefined1 **)0x59bff7;
  FUN_00404b6c(&local_8,local_c);
  ppuStack_28 = (undefined1 **)0x59bfff;
  uVar3 = FUN_00409ff8(local_8);
  ppuStack_28 = (undefined1 **)0x59c008;
  FUN_00599988(param_1,uVar3);
  ppuStack_28 = (undefined1 **)0x59c015;
  FUN_00466128(*(undefined4 *)(param_1 + 0x370),0);
  ppuStack_28 = (undefined1 **)0x59c022;
  FUN_00466128(*(undefined4 *)(param_1 + 0x37c),1);
  *in_FS_OFFSET = (int)puStack_24;
  local_1c = &LAB_0059c05a;
  iStack_20 = 0x59c042;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  iStack_20 = 0x59c04a;
  FUN_00404ff0(&local_c);
  iStack_20 = 0x59c052;
  FUN_004048d4(&local_8);
  return;
}

