// Address: 004215b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004215b4(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0042162b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00406880(&local_8);
  if (param_2 != 0) {
    iVar3 = FUN_00419c28(*(undefined4 *)**(undefined4 **)(param_1 + 0xc));
    uVar4 = FUN_00406880(&local_8);
    cVar2 = FUN_0040fe94(param_2,iVar3 + 5,uVar4);
    if (cVar2 == '\0') {
      FUN_00406880(&local_8);
    }
  }
  FUN_0041abe0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00421632;
  puStack_18 = (undefined1 *)0x42162a;
  FUN_00406880(&local_8,uStack_1c,puVar1);
  return;
}

