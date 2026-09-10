// Address: 0062d38c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x0062d3b9) */
/* WARNING: Removing unreachable block (ram,0x0062d3e1) */
/* WARNING: Removing unreachable block (ram,0x0062d449) */
/* WARNING: Removing unreachable block (ram,0x0062d459) */

void TForm92_gridview1CellClick(void)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  undefined1 local_10 [4];
  undefined4 local_c;
  int local_8;
  
  local_8 = 5;
  do {
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = 0;
  *in_FS_OFFSET = uStack_28;
  local_20 = &LAB_0062d49e;
  uStack_24 = 0x62d486;
  FUN_00405744(local_30,PTR_DAT_004010f8,2);
  uStack_24 = 0x62d48e;
  FUN_00404ff0(local_10);
  uStack_24 = 0x62d496;
  FUN_004048d4(&local_c);
  return;
}

