// Address: 004afe58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004afe58(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 local_172 [10];
  byte local_168;
  undefined1 local_164 [335];
  char local_15;
  int local_14;
  undefined1 local_e [4];
  undefined2 local_a;
  undefined2 local_8;
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 != 0) {
    *PTR_DAT_0066b528 = 0;
    FUN_00402edc(local_164,param_1);
    FUN_004033ec(local_164,1);
    iVar3 = FUN_004029e4();
    if (iVar3 == 0) {
      FUN_0040302c(local_164,local_172,0xe,&local_14);
      if (((local_14 == 0xe) && (iVar3 = FUN_004029e4(), iVar3 == 0)) &&
         (iVar3 = FUN_0040a8a0(&DAT_004b0008,local_172,3), iVar3 == 0)) {
        if ((local_168 & 1) != 0) {
          iVar3 = FUN_0040320c(local_164);
          FUN_00403408(local_164,iVar3 + (1 << (local_168 >> 5) + 1) * 3);
          iVar3 = FUN_004029e4();
          if (iVar3 != 0) {
            FUN_0040304c(local_164);
            FUN_00402964();
            return;
          }
        }
        bVar1 = false;
        FUN_004032a8(local_e,10,0);
        FUN_0040302c(local_164,&local_15,1,&local_14);
        while ((cVar2 = FUN_004031f0(local_164), cVar2 == '\0' && (!bVar1))) {
          if (local_15 == ',') {
            FUN_0040302c(local_164,local_e,10,&local_14);
            if (local_14 != 10) {
              FUN_0040304c(local_164);
              return;
            }
            *param_2 = local_a;
            *param_3 = local_8;
            bVar1 = true;
          }
          FUN_0040302c(local_164,&local_15,1,&local_14);
        }
        FUN_0040304c(local_164);
        return;
      }
      FUN_0040304c(local_164);
      FUN_00402964();
    }
  }
  return;
}

