// Address: 004256d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004256d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00425730;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcVar3 = (code *)FUN_0041d808();
  if (pcVar3 != (code *)0x0) {
    cVar2 = (*pcVar3)(param_2,&local_8);
    if (cVar2 != '\0') {
      FUN_00424c38(*(undefined4 *)(param_4 + -4),local_8);
      goto LAB_0042571a;
    }
  }
  FUN_00424cfc(*(undefined4 *)(param_4 + -4),param_2);
LAB_0042571a:
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00425737;
  puStack_18 = (undefined1 *)0x42572f;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

