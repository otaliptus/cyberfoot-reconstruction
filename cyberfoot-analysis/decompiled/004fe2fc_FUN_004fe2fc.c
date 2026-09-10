// Address: 004fe2fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fe2fc(int *param_1,int param_2,undefined4 *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  HDC hdc;
  undefined4 uVar3;
  tagRECT *lprect;
  undefined1 *puVar4;
  undefined1 local_34 [16];
  tagRECT local_24;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_14 = *param_3;
  uStack_10 = param_3[1];
  uStack_c = param_3[2];
  uStack_8 = param_3[3];
  if (param_4 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  FUN_004e5390(PTR_DAT_004e5104,&local_14,0,local_34,uVar3,uVar3,0);
  if (*(char *)(*(int *)(param_2 + 0x5c) + 0x28) != '\x03') {
    iVar2 = param_1[2];
    (**(code **)(**(int **)(iVar2 + 0xc) + 8))
              (*(int **)(iVar2 + 0xc),*(undefined4 *)(param_2 + 0x58));
    FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(*(int *)(param_2 + 0x5c) + 8));
    FUN_0042af8c(iVar2,local_34);
  }
  if (param_4 != '\0') {
    FUN_004fdc4c(param_1,&local_14,0xff00000f);
  }
  lprect = &local_24;
  hdc = (HDC)FUN_0042b5a8(param_1[2]);
  GetClipBox(hdc,lprect);
  FUN_004e6b90(param_1[2],&local_14);
  cVar1 = *(char *)(*(int *)(param_2 + 0x5c) + 0x28);
  if ((cVar1 == '\0') || (cVar1 == '\x02')) {
    (**(code **)(*param_1 + 0x1c))(param_1,param_2,local_34);
  }
  puVar4 = local_34;
  uVar3 = FUN_0050a2cc(param_2);
  (*(code *)param_1[6])(param_1[7],param_1,uVar3,puVar4);
  FUN_004e6b90(param_1[2],&local_24);
  return;
}

