// Address: 004668c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004668c0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  tagPOINT tStack_1c;
  LONG LStack_14;
  LONG LStack_10;
  
  cVar1 = FUN_00403c10(param_1,PTR_PTR_0047cb68);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x9b) != '\x01')) {
    FUN_0040e42c(PTR_DAT_0041b6dc,1,PTR_PTR_0066b44c);
    FUN_00404250();
  }
  FUN_00467400(param_1);
  if ((DAT_0066cb70 == 0) || (DAT_0066cb70 == -1)) {
    DAT_0066cb70 = 0;
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      GetCursorPos(&tStack_1c);
      FUN_00465d4c(param_1,&tStack_1c,&LStack_14);
      tStack_1c.x = LStack_14;
      tStack_1c.y = LStack_10;
      uVar2 = FUN_004080e0(&tStack_1c);
      FUN_004673cc(param_1,0x202,0,uVar2);
    }
    if (param_3 < 0) {
      param_3 = *(int *)(DAT_0066cb54 + 8);
    }
    if (DAT_0066cb70 != -1) {
      FUN_00464558(param_1,param_2,param_3);
    }
  }
  return;
}

